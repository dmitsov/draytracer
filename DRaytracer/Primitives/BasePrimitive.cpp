#include "BasePrimitive.h"

Primitive::Primitive()
: shape(nullptr), material(nullptr)
{}

Primitive::Primitive(BaseShape* baseShape, IMaterial* mat)
	: shape(baseShape), material(mat)
{}

bool Primitive::Intersect(const Ray& ray, SampleData& data) const
{
	bool hasIntersected = shape->Intesect(ray, data);

	//Use material here

	return hasIntersected;
}
