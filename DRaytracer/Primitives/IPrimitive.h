#pragma once
#include "../Shapes/BaseShape.h"
#include "../Materials/IMaterial.h"
#include <memory>

#ifndef IPRIMITIVE_H_
#define IPRIMITIVE_H_

class IPrimitive
{
public:
	virtual bool Intersect(const Ray& ray, SampleData& data) const = 0;
};

#endif // 

