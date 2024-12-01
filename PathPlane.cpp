#include "PathPlane.h"
#include <iostream>
#include <queue>
#include <unordered_map>
#include <cmath>
#include <stdlib.h>

double AirplanePath::heuristic(const Point& a, const Point& b) {
    return std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2));
}


bool AirplanePath::find() {
    
    Point current_point = start; 
    while(current_point != finish) {
        path.push_back(current_point);
        

        current_point.x;
        current_point.y;
        
        // Point point8 = current_point;
        // point8.x = point8.x + 1;
        // point8.y = point8.y + 0;

        Point point1 = current_point + Point(-1, -1);
        Point point2 = current_point + Point(0, -1);
        Point point3 = current_point + Point(1, -1);
        Point point4 = current_point + Point(-1, 0);
        Point point6 = current_point + Point(1, 0);
        Point point7 = current_point + Point(-1, 1);
        Point point8 = current_point + Point(0, 1);
        Point point9 = current_point + Point(1, 1);

        int min_dist = 999999;
        Point closest_point;
        
        int dist1 = abs(point1.x - finish.x) + abs(point1.y - finish.y);
        if (dist1 < min_dist) {
            min_dist = dist1;
            closest_point = point1;
        }
        int dist2 = abs(point2.x - finish.x) + abs(point2.y - finish.y);
        if (dist2 < min_dist) {
            min_dist = dist2;
            closest_point = point2;
        }
        int dist3 = abs(point3.x - finish.x) + abs(point3.y - finish.y);
        if (dist3 < min_dist) {
            min_dist = dist3;
            closest_point = point3;
        }
        int dist4 = abs(point4.x - finish.x) + abs(point4.y - finish.y);
        if (dist4 < min_dist) {
            min_dist = dist4;
            closest_point = point4;
        }
        int dist6 = abs(point6.x - finish.x) + abs(point6.y - finish.y);
        if (dist6 < min_dist) {
            min_dist = dist6;
            closest_point = point6;
        }
        int dist7 = abs(point7.x - finish.x) + abs(point7.y - finish.y);
        if (dist7 < min_dist) {
            min_dist = dist7;
            closest_point = point7;
        }
        int dist8 = abs(point8.x - finish.x) + abs(point8.y - finish.y);
        if (dist8 < min_dist) {
            min_dist = dist8;
            closest_point = point8;
        }
        int dist9 = abs(point9.x - finish.x) + abs(point9.y - finish.y);
        if (dist9 < min_dist) {
            min_dist = dist9;
            closest_point = point9;
        }

        current_point = closest_point;

    }

    
    //Point finish_point = current_point;
    path.push_back(current_point);
    // Pokud jsme nedorazili do cíle
	return false;
}