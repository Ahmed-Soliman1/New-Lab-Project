#include <fstream>
#include <sstream>
#include "fileio.h"

void saveUserDataToFile() {
    std::ofstream file("userdata.text");
    if (file.is_open()) {
        for (size_t i = 0; i < usernames.size(); ++i) {
            file << usernames[i].toStdString() << ','
                 << passwords[i].toStdString() << ','
                 << CardName[i].toStdString() << ','
                 << CardNumber[i].toStdString() << ','
                 << CVV[i].toStdString() << ','
                 << ages[i] << ','
                 << UserType[i] << '\n';
        }
        file.close();
    }
}

void loadUserDataFromFile() {
    std::ifstream file("userdata.text");
    if (file.is_open()) {
        usernames.clear();
        passwords.clear();
        CardName.clear();
        CardNumber.clear();
        CVV.clear();
        ages.clear();
        UserType.clear();

        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string username, password, cardName, cardNumber, cvv, age, userType;
            if (std::getline(iss, username, ',') &&
                std::getline(iss, password, ',') &&
                std::getline(iss, cardName, ',') &&
                std::getline(iss, cardNumber, ',') &&
                std::getline(iss, cvv, ',') &&
                std::getline(iss, age, ',') &&
                std::getline(iss, userType)) {
                usernames.push_back(QString::fromStdString(username));
                passwords.push_back(QString::fromStdString(password));
                CardName.push_back(QString::fromStdString(cardName));
                CardNumber.push_back(QString::fromStdString(cardNumber));
                CVV.push_back(QString::fromStdString(cvv));
                ages.push_back(std::stoi(age));
                UserType.push_back(userType == "1");
            }
        }
        file.close();
    }
}
