#include <iostream>
#include <string>

void show_help()
{
    std::cout << "Usage:\n";
    std::cout << " dfs command [options]\n";
    std::cout << "Commands:\n";
    std::cout << " start   Start the file server\n";
    std::cout << " stop    Stop the file server\n";
    std::cout << " status  Show the status of the server\n ";
}

int main(int argc, char** argv)
{
    if ( argc > 1 )
    {
        std::string command(argv[1]);

        if ( command == "help" )
        {
            show_help();
        }
        else if ( command == "start" )
        {
            // Start file server
            std::cout << "Starting file server...\n";
        }
        else if ( command == "stop" )
        {
            // Stop file server
            std::cout << "Stop file server...\n";
        }
        else if ( command == "status" )
        {
            // Display status
            std::cout << "Server status: Running\n";
        }
        else
        {
            std::cout << "Unknown command. Type 'help' for a list of commands.\n";
        }
    }
    else
    {
        std::cout << "Welcome to Distributed File System\n";
        show_help();
    }

    std::cout << "Welcome to Districuted File System" << std::endl;

    return 0;
}
