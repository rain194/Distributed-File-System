// File: include/FileServer.hh
#ifndef FILE_SERVER_H
#define FILE_SERVER_H

#include <iostream>

class FileServer
{
public:
    FileServer();
    ~FileServer();

    void start();
    void stop();
    void status() const;
};

#endif // FILE_SERVER_H
