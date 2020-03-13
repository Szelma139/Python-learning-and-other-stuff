#include "personmodel.h"

PersonModel::PersonModel()
{

}

std::string PersonModel::getFirstName() const
{
    return FirstName;
}

void PersonModel::setFirstName(const std::string &value)
{
    FirstName = value;
}

std::string PersonModel::getLastName() const
{
    return LastName;
}

void PersonModel::setLastName(const std::string &value)
{
    LastName = value;
}

std::string PersonModel::getEmailAddress() const
{
    return EmailAddress;
}

void PersonModel::setEmailAddress(const std::string &value)
{
    EmailAddress = value;
}

std::string PersonModel::getCellphoneNumber() const
{
    return CellphoneNumber;
}

void PersonModel::setCellphoneNumber(const std::string &value)
{
    CellphoneNumber = value;
}
