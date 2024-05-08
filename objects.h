#ifndef OBJECTS_H
#define OBJECTS_H

#include <vector>
#include<QString>
#include <QDialog>
#include<iostream>
using namespace  std;


class Product { // base class product
protected:
    float price;
    QString name;
    int quantity ;
    QString type;
public:

    float getPrice(){ // used in the comparator to sort according to price
        return price;
    }
    QString getName(){ // used in the comparator to sort according to name
        return name;
    }
    int getQuantity() { // used in the comparator to sort according to quantity
        return quantity;
    }
    bool operator==(const Product& other) const { // i have to overridde the == operator to use it
        //for the comparators for the sort
        //function because i am comparing user-defined data

        return name == other.name && price == other.price && quantity == other.quantity;
    }
    // void displayDetails(){
    //     cout<< "Name: "<< name<< " price: "<< price<< " quantity: "<< quantity<< " type: "<< type <<endl;
    // }
};
//========================================================================================================================
class ElectronicProducts : public Product { // first derived class from products base class
private:
    int warranty;
    QString factory;
public:
    ElectronicProducts (int p, QString n, int q, QString t, int w, QString f){ // constructor of elctronic products
        price=p;
        name=n;
        type=t;
        quantity=q; // num of devices available
        warranty=w;
        factory=f;
    }
    // void displayDetails(){ //overridden to display the warranty of electronic products
    //     cout<< "Name: "<< name<< " price: "<< price<< " quantity: "<< quantity<< " type: "<< type <<endl
    //          << "warranty "<< warranty<<" years "<<endl<< "factory: "<< factory<<endl;
    // }
};
//========================================================================================================================

class Foodproducts : public Product {
private:
    QString expiryDate;
public:
    Foodproducts (int p, QString n, int q, QString t, QString ex){ // constructor of food products
        price=p;
        name=n;
        type=t;
        quantity=q; // quantity
        expiryDate=ex;
    };
};
//========================================================================================================================
class  BookProducts: public Product{
private:
    QString author;
    QString genre ;
public:
    BookProducts(int p, QString n, int q, QString t, QString g, QString a){ // constructor of book products
        price=p;
        name=n;
        type=t;
        quantity=q; // quantity
        genre=g;
    }};
//========================================================================================================================
template<class T>
class  ProductManger {
private:
    vector<T> products; // vector thats holds all products to manage

public:
    static bool   priceComparator (  Product& a,  Product& b) { // custom comparator for price
        return a.getPrice()<b.getPrice();

        // they should be static to be able to access data without being an instance of the classes of the data accessed
    }

    static bool   quantatiyComparator (  Product& a,  Product& b) { // custom comparator for quantity
        return a.getQuantity()<b.getQuantity(); }
    static  bool   nameComparator (  Product& a,  Product& b)  { // custom comparator for name
        return a.getName()<b.getName();
    }
    void addproducts ( const T& Product){ //  adding the products to the product vector
        products.push_back(Product);

    }
    typename vector<T>::iterator findfunction(const T& Product) { // find function to find the
        //index of the element ot remove
        return find(products.begin(), products.end(), Product);
    }

    void removeProduct(const T& Product) { // remove function
        auto it = findfunction(Product);
        if (it != products.end()) {
            products.erase(it);
        }
    }
    void Sorts(const QString sortBy) { //sorts function to sort products using a custom comparator
        if (sortBy == "Price" || sortBy == "price") {
            sort(products.begin(), products.end(), priceComparator);
        }
        else if (sortBy == "Name" || sortBy == "name") {
            sort(products.begin(), products.end(), nameComparator);
        }
        else if (sortBy == "Quantity" || sortBy == "quantity") {
            sort(products.begin(), products.end(), quantatiyComparator);
        }
    }
    ProductManger<T> operator+(const T& product) const { //overload the + to add products
        ProductManger<T> manager = *this; // save the manager entered to a temp var to use to call the function
        manager.addproducts(product); // call the function
        return manager; //return the function because we declared its type as a productmanager

    }
    friend  ostream& operator<<(ostream& os,  ProductManger<T>& manager)  {  //overload the << to display products products
        manager.displayProducts();
        return cout;
    }
    void displayProducts()  { //function to display products
        for ( auto& product : products) {
            product.displayDetails();
        }
    }



};
//=========================================================================================================================

class Discounts {
    // class of discounts
private:
    QString Cname;
    float value;


public:
    Discounts(QString n,float v){
        Cname=n;
        value=v;
    }




    QString getCname(){
        return Cname;
    }

    float getValue(){
        return value;
    }


};
//=========================================================================================================================


template<class T>
class  shoppingCarts {
private:
    vector<T> shoppingCarts;  // vector thats holds all products to put in a cart

public:
    void addproducts ( const T& Product){ //  adding the products to the cart vector
        shoppingCarts.push_back(Product);

    }
    typename vector<T>::iterator findfunction(const T& Product) { // find function to find the
        //index of the element ot remove
        return find(shoppingCarts.begin(), shoppingCarts.end(), Product);
    }

    void removeProduct(const T& Product) { // remove function
        auto it = findfunction(Product);
        if (it != shoppingCarts.end()) {
            shoppingCarts.erase(it);
        }
    }

    vector<T> getProducts() { // used in the order constructor to fill
        //the order vector with the shoping cart vector
        return shoppingCarts;
    }
    void printCart()  {

        cout << "Products in the cart:" << endl;
        for ( auto& product : shoppingCarts) {
            cout << "Name: " << product.getName() << ", Price: " << product.getPrice() <<  endl;
        }
        cout << "-----------------------" << endl;
    }

};
//=========================================================================================================================

class Orders  {
private :
    int orderId;
    int allOrders=0;
    float orderPrice=0;


    vector<Discounts> coupons; // vector that takes the discounts to be applied on the order
    vector<Product>  cart; // vector that takes a type object of class product and declares an //
        //array to store products to be ordered
public:
    Orders(int ordernum,  shoppingCarts<Product>& shop ){ // order constructor takes a vector object of /
        //shopping cart gives it an Id and intializes the order
        cart=shop.getProducts();
        orderId=ordernum;

        allOrders++;

    }



    friend Orders operator-( Orders& order, const Discounts& discount) {

        order.addCoupon(discount);
        return order;


    }
    int calculatePrice(){ // function to calculate total  price
        for ( auto& product : cart) {
            orderPrice+=product.getPrice();
        }

        //cout<< "Total price: "<< orderPrice<<endl;

        return orderPrice;


    }

    void addCoupon( Discounts a){

        if( coupons.empty()){
            coupons.push_back(a);
            if (a.getCname() == "percentage OFF"){
                calculatePrice();
                orderPrice*=a.getValue() ; // Calculate the discount rate (1 - percentage)



            }
            else
                if(a.getCname() == "-$"){
                    orderPrice=calculatePrice();
                    orderPrice-=a.getValue() ;
                }


        }
        else{
            cout<< "you have already used a coupon on this order \n u can only use 1 coupon per order\n";
        }
    }

    // void printOrder()  { //function to display the order
    //     cout << "Order ID: " << orderId << endl;
    //     cout << "Products in the order:" << endl;
    //     for ( auto& product : cart) {
    //         cout << "Name: " << product.getName() << ", Price: " << product.getPrice() <<  endl;
    //     }

    //     cout<<endl<< "Total price after discounts : "<< orderPrice <<endl;
    //     cout << "-----------------------" << endl;

    // }


    int getId(){ return orderId;}
    int getall(){ return allOrders;}


};
#endif // OBJECTSS_H
