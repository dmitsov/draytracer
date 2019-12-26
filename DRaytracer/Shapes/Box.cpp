#include "Box.h"

Box::Box()
:width(0), height(0)
{
}

Box::Box(const Vector3& o, double w, double h)
: origin(o), width(w), height(h)
{}

bool Box::Intersect(const Ray & ray, SampleData& dist) const
{
	return false;
}

