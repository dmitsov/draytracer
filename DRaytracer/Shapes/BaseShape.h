#pragma once
#ifndef SHAPE_H_
#define SHAPE_H_

#include "../Math/Ray.h"
#include "../Data/SampleData.h"

class BaseShape
{
public:
	virtual bool Intesect(const Ray& ray, SampleData& data) const = 0;
};

#endif