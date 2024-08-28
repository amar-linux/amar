#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>
#include<unistd.h>


#define TS_BUF_LENGTH 30

// Define my options
#define LOG_TIME  0x01   //0b00000001
#define LOG_DATE  0x02   //0b00000010
#define LOG_USER  0x08   //0b00000100
#define LOG_COUNT 0x08  //0b00001000


void logmsg (FILE *fp,char* message, uint8_t options ){

    static uint64_t logcount =0;

    time_t time_val;
    char timestamp[TS_BUF_LENGTH];
    char datestamp[TS_BUF_LENGTH];
    struct tm* tm_info;

    time_val= time(NULL);
    tm_info = localtime(&time_val);

    strftime(datestamp, TS_BUF_LENGTH, "%F (%a)", tm_info);
    strftime(timestamp, TS_BUF_LENGTH, "%H:%M:%S", tm_info);

    /*
    fprintf(fp, "%lu, ",++logcount);
    fprintf(fp, "%s, ",datestamp);
*/
    if (options & LOG_COUNT)
        fprintf(fp, "%lu, ",++logcount);
    if (options & LOG_DATE)
        fprintf(fp, "%s, ",datestamp);
    if (options & LOG_TIME)
        fprintf(fp, "%s, ",timestamp);
    if (options & LOG_USER)
        fprintf(fp, "%s, ",getlogin());
    fprintf (fp, "%s\n", message);

}


int main(){

    logmsg(stdout, "Things are running fine ",0);
    logmsg(stdout, "Maybe not whats this",LOG_USER);
    logmsg(stdout, "The wheels are coming off", LOG_TIME | LOG_USER);
    logmsg(stdout, "AAAAAA.", LOG_COUNT | LOG_USER | LOG_TIME | LOG_DATE
            );


}
