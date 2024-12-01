#ifndef PATHSHIP_P
#define PATHSHIP_P

#include "Path.h"
#include <queue>
#include <unordered_map>
#include <cmath>

// T??da AirplanePath odvozen? od Path
class ShipPath : public Path {
public:
	ShipPath(TerrainMap& m, std::string name_in, Point start_in, Point finish_in) : Path(m, name_in, start_in, finish_in) {}
	virtual bool find() override;
private:
	double heuristic(const Point& a, const Point& b);
};

#endif
