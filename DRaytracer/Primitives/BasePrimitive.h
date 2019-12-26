#pragma once

#include "IPrimitive.h"

#ifndef BASE_PRIMITIVE_H_
#define BASE_PRIMITIVE_H_

class Primitive: public IPrimitive
{
protected:
	std::shared_ptr<BaseShape> shape;
	std::shared_ptr<IMaterial> material;

public:
	Primitive();
	Primitive(BaseShape* baseShape, IMaterial* mat);

	virtual bool Intersect(const Ray& ray, SampleData& data) const;
};

#endif // !BASE_PRIMITIVE_H_
