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
      printf("Enter the latitude and longitude of the destination (in degrees):\n");
    printf("Latitude: ");
    scanf("%lf", &latitude2);
    printf("Longitude: ");
    scanf("%lf", &longitude2)
    // Convert degrees to radians
    latitude1 = degreesToRadians(latitude1);
    longitude1 = degreesToRadians(longitude1);
    latitude2 = degreesToRadians(latitude2);
    longitude2 = degreesToRadians(longitude2);
    

