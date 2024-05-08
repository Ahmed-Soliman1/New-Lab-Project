#ifndef FILEIO_H
#define FILEIO_H

#include <QString>
#include <vector>

void saveUserDataToFile();
void loadUserDataFromFile();

extern std::vector<QString> usernames;
extern std::vector<QString> passwords;
extern std::vector<QString> CardName;
extern std::vector<QString> CardNumber;
extern std::vector<QString> CVV;
extern std::vector<int> ages;
extern std::vector<bool> UserType;
extern int usersCount;

#endif // FILEIO_H
