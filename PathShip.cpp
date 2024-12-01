#include "PathShip.h"
#include <iostream>
#include <queue>
#include <unordered_map>
#include <cmath>
#include <stdlib.h>
#include <queue>

double ShipPath::heuristic(const Point& a, const Point& b) {
    return std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2));
}


bool ShipPath::find() {

    std::queue<Point> q;
    std::vector<std::vector<bool>> visited(map.nx, std::vector<bool>(map.ny,false));
    
    visited[start.x][start.y] = true;
    q.push(start);
    


    std::vector<std::vector<Point>> from(map.nx, std::vector<Point>(map.ny, Point(0, 0)));

    std::cout << map.alt(finish) << std::endl;

    Point current_point;
    while (current_point != finish && !q.empty()) {
        
        current_point = q.front();
        q.pop();

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

        


        if (point2.x >= 0 && point2.y >= 0 && point2.x < map.nx && point2.y < map.ny) {
            if ((map.alt(point2) < 0 || (map.alt(point2) > 0 && point2 == finish)) && !visited[point2.x][point2.y]) {
                q.push(point2);
                visited[point2.x][point2.y] = true;
                from[point2.x][point2.y] = current_point;
            }
        }
        if (point4.x >= 0 && point4.y >= 0 && point4.x < map.nx && point4.y < map.ny) {
            if ((map.alt(point4) < 0 || (map.alt(point4) > 0 && point4 == finish)) && !visited[point4.x][point4.y]) {
                q.push(point4);
                visited[point4.x][point4.y] = true;
                from[point4.x][point4.y] = current_point;
            }
        }
        if (point6.x >= 0 && point6.y >= 0 && point6.x < map.nx && point6.y < map.ny) {
            if ((map.alt(point6) < 0 || (map.alt(point6) > 0 && point6 == finish)) && !visited[point6.x][point6.y]) {
                q.push(point6);
                visited[point6.x][point6.y] = true;
                from[point6.x][point6.y] = current_point;
            }
        }
        if (point8.x >= 0 && point8.y >= 0 && point8.x < map.nx && point8.y < map.ny) {
            if ((map.alt(point8) < 0 || (map.alt(point8) > 0 && point8 == finish)) && !visited[point8.x][point8.y]) {
                q.push(point8);
                visited[point8.x][point8.y] = true;
                from[point8.x][point8.y] = current_point;
            }
        }
        if (point1.x >= 0 && point1.y >= 0 && point1.x < map.nx && point1.y < map.ny) {
            if ((map.alt(point1) < 0 || (map.alt(point1) > 0 && point1 == finish)) && !visited[point1.x][point1.y]) {
                q.push(point1);
                visited[point1.x][point1.y] = true;
                from[point1.x][point1.y] = current_point;
            }
        }
        if (point3.x >= 0 && point3.y >= 0 && point3.x < map.nx && point3.y < map.ny) {
            if ((map.alt(point3) < 0 || (map.alt(point3) > 0 && point3 == finish)) && !visited[point3.x][point3.y]) {
                q.push(point3);
                visited[point3.x][point3.y] = true;
                from[point3.x][point3.y] = current_point;
            }
        }
        if (point7.x >= 0 && point7.y >= 0 && point7.x < map.nx && point7.y < map.ny) {
            if ((map.alt(point7) < 0 || (map.alt(point7) > 0 && point7 == finish)) && !visited[point7.x][point7.y]) {
                q.push(point7);
                visited[point7.x][point7.y] = true;
                from[point7.x][point7.y] = current_point;
            }
        }
        if (point9.x >= 0 && point9.y >= 0 && point9.x < map.nx && point9.y < map.ny) {
            if ((map.alt(point9) < 0 || (map.alt(point9) > 0 && point9 == finish)) && !visited[point9.x][point9.y]) {
                q.push(point9);
                visited[point9.x][point9.y] = true;
                from[point9.x][point9.y] = current_point;
            }
        }

       

    }
    current_point = finish;


    std::vector<Point> tmp;
    while (current_point != start) {
        tmp.push_back(current_point);
        Point prev_point = from[current_point.x][current_point.y];
        current_point = prev_point;
    }
    tmp.push_back(current_point);
    for (int i = tmp.size()-1; i >= 0; i--) {
        path.push_back(tmp[i]);
    }


    //Point finish_point = current_point;
    // Pokud jsme nedorazili do cíle
    return false;


    

    

}



