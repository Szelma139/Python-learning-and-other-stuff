#ifndef PERSONMODEL_H
#define PERSONMODEL_H
#include <string>

class PersonModel
{
public:
    PersonModel();
    std::string getFirstName() const;
    void setFirstName(const std::string &value);

    std::string getLastName() const;
    void setLastName(const std::string &value);

    std::string getEmailAddress() const;
    void setEmailAddress(const std::string &value);

    std::string getCellphoneNumber() const;
    void setCellphoneNumber(const std::string &value);

private:
    std::string FirstName;
    std::string LastName;
    std::string EmailAddress;
    std::string CellphoneNumber;

};

#endif // PERSONMODEL_H
