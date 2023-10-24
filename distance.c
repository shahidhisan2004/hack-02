#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846


double degreesToRadians(double degrees) {
    return degrees * M_PI / 180.0;}
    int main() {
    double latitude1, longitude1, latitude2, longitude2;

    const float  EARTH_RADIUS = 6371.0;

    printf("Enter the latitude and longitude of the origin (in degrees):\n");
    printf("Latitude: ");
    scanf("%lf", &latitude1);
    printf("Longitude: ");
    scanf("%lf", &longitude1);
    
