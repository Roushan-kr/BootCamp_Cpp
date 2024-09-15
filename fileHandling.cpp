#include <iostream>
using namespace std;

// insteed of redining/defining micros 
constexpr int maxBuffer = 1024; // use for flush out of the file 


int main()
{
    // static const char *originalFile = "fle.txt";
    // static const char *editFile = "editFile.txt";
    // FILE *fhndlear = fopen(originalFile, "w"); // 6mode r,w(also use for creating afile),a (append),
    // remember closing it
    // fclose(fhndlear);

    // renaming file name
    // rename(originalFile, editFile); // for renaming don't open and close it 
    // remove(editFile); // for delating file 


    // now adding info to file 
    // static const char *fileName = "myFile.txt";
    // const char *info ="lorem ispusm dolar emit\n";

    // FILE *fh = fopen(fileName,"a");
    
    // for (int i = 0; i < 50; i++)
    // {
    //     fputs(info, fh);  // what info to put , where(media)
    // }
    // fclose(fh);

    // now reading data from file 
    static const char * fileName ="myFile.txt";
    char buff[maxBuffer];
    FILE *fh = fopen(fileName, "r");
    while (fgets(buff, maxBuffer, fh))
    {
        fputs(buff,stdout);
    }
    fclose(fh);
    return 0;
}