/*
Copyright (C) 2018 Thomas Kummer
licensed under the GNU General Public License v3.0 
*/

/* Run this BEFORE using this code
sudo /sys/class/gpio/export
sudo echo "out" > /sys/class/gpio/gpio4/direction
sudo chmod 660 /sys/class/gpio/gpio4/value
*/
#include <stdio.h>
#include <unistd.h>

int main () {

        while(1) {
        FILE *ptr;
        ptr = fopen ("/sys/class/gpio/gpio4/value", "w");
        fprintf(ptr, "1");
        fclose(ptr);
        sleep(1);
        ptr = fopen ("/sys/class/gpio/gpio4/value", "w");
        fprintf(ptr, "0");
        fclose(ptr);
        sleep(1);
   }
   /* never reach this */
   return 0;
}
