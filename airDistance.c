/**
 * Name: Luciano Carvalho (lguedesdecarvalhon2@huskers.unl.edu)
 * 
 * Date: 2023 - 08 - 29
 * 
 * Ask the user to write the Latitude and Longitute from two places
 * and output their distance.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EARTH_RADIUS 6371 

int main(int argc, char **argv) {

    double latitudeOrigin, latitudeDestination, longitudeOrigin, longitudeDestination, distance;
    short int invalidValue = 1, end = 0; 
    

    while (end == 0)
    {
        while(invalidValue == 1)
        {

        //ask user tha latitude pacand longitude from both origin and destination
        printf("Latitude from the origin: ");
        scanf("%lf", &latitudeOrigin);
        

        printf("Longitude from the origin: ");
        scanf("%lf", &longitudeOrigin);

        printf("\nLatitude from the destination: ");
        scanf("%lf",&latitudeDestination);


        printf("Longitude from the destination: ");
        scanf("%lf", &longitudeDestination);



        //Valitading the user input
        if (latitudeDestination > 90 || latitudeDestination < -90 || latitudeOrigin > 90 || latitudeDestination < -90) 
        {
            
            printf ("\nPLEASE, ENTER A LATITUDE VALUE IN THE RANGE OF [-90,90]!\n\n");
        }

        if (longitudeOrigin < -180 || longitudeOrigin > 180 || longitudeDestination < -180 || longitudeDestination > 180)
        {
            
            printf ("\nPLEASE, ENTER A LONGITUDE VALUE IN THE RANGE OF [-180,180]!\n\n");
        } else
        {
            distance = acos(sin((latitudeOrigin/180) * M_PI)*sin((latitudeDestination/180) * M_PI) + cos((latitudeDestination/180) * M_PI)*cos((latitudeOrigin/180) * M_PI)*
            cos((longitudeDestination/180) * M_PI - (longitudeOrigin/180) * M_PI)) * EARTH_RADIUS;
        
            printf("\nLocation Distance\n========================\n");
            printf("Origin: (%.6lf,%.6lf)\n", latitudeOrigin, longitudeOrigin);
            printf("Destination : (%.6lf,%.6lf)\n", latitudeDestination, longitudeDestination);
            printf("Air distance is %.6lf kms\n", distance);
            invalidValue = 0;


            //last validation
            end=1;
        }

            
        } 
        
    }
    
    
    
    
    


}