#ifndef PATHPLANE_P
#define PATHPLANE_P

#include "Path.h"
#include <queue>
#include <unordered_map>
#include <cmath>

// T??da AirplanePath odvozen? od Path
class AirplanePath : public Path {
public:
	AirplanePath(TerrainMap& m, std::string name_in, Point start_in, Point finish_in) : Path(m, name_in, start_in, finish_in) {}
	virtual bool find() override;
private:
	double heuristic(const Point& a, const Point& b);
};

#endif