/***************
 * 
 * Codecademy C++ Challenge 2: if/elseif/else
 * 
 * Hello World in different Coding Languages!
 * 
 **************/



#include <iostream>

int main(){

    //This is so they can try again if they enter a wrong number. It's the quickest way to know if the language didn't exist.
    std::string languageError = "I'm sorry, but it looks like that wasn't one of the language options. Try again.";

    //The user's input
    int userInput;


    //An introduction
    std::cout << "Want to know how to make a \"Hello World!\" program\n"
                 "in your favorite programming language?\n\n"
                 "You've come to the right place. Each number corresponds to a language.\n"
                 "Enter a number below, and we'll give you the code!\n\n";
    std::cout << "Languages:\n"
                 "1) C++\n"
                 "2) C#\n"
                 "3) Java\n";
    

    
    //Instructions and input
    std::cout <<  "Pick a programming language: ";
    std::cin >> userInput;
    if ( userInput == 1 ) {
        //C++
        std::cout << "#include <iostream>\n\n"
                         "int main(){\n"
                         "\tstd::cout << \"Hello World!\";\n"
                         "\treturn 0;\n"
                         "}\n";   
    }
    
    else if ( userInput == 2 ) {
        //C#
        std::cout << "using System;\n\n"
                         "namespace HelloWorld\n"
                         "{\n"
                         "\tclass Program\n"
                         "\t{\n"
                         "\t\tstatic void Main(string[] args)\n"
                         "\t\t{\n"
                         "\t\t\tConsole.WriteLine(\"Hello World!\");\n"
                         "\t\t}\n"
                         "\t}\n"
                         "}\n";   
    }
    
    else if ( userInput == 3 ) {
           //Java
            std::cout << "public class HelloWorld {\n\n"
                         "\tpublic static void main(String[] args) {\n"
                         "\t\tSystem.out.println(\"Hello World!\");\n"
                         "\t}\n"
                         "}\n";
    }
    else {
        std::cout << "Hmm...that wasn't one of the options.\n\n\n"; 
        main();  
    }
    

    
    return 0;
}
