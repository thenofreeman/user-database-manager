#include <iostream>

#include "Database.h"
#include "Menu.h"
#include "User.h"

int main()
{
    nsa::Database db ("data.txt");

    bool running = true;
    while (running)
    {
        displayMenu();

        switch(getSelection("Make a selection", 4))
        {
            case LIST:
                for (nsa::User user : db.getUsers())
                    std::cout << user << std::endl;
                break;
            case ADD:
                // db.addUser()
                break;
            case REMOVE:
                // db.removeUser(10);
                break;
            case SORT:
                db.sort();
                break;
            case QUIT:
                running = false;
                break;
            default:
                std::cout << "Not a valid menu option. Try again." << '\n';
                break;
        }
    }

    // db.save();

    return 0;
}
