#ifndef FILECHECKER_H
#define FILECHECKER_H


class FileChecker
{
public:
    FileChecker();
    bool fileStatus;

    bool getFileStatus() const;
    void setFileStatus(bool value);
};

#endif // FILECHECKER_H
