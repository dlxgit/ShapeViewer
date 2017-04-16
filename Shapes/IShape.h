#pragma once
#include <string>
#include <boost/lexical_cast.hpp>

class IShape
{
public:
	IShape() = default;
	virtual std::string GetFillColor() const = 0;
	virtual std::string GetOutlineColor() const = 0;
	virtual void SetOutlineColor(const std::string & color) = 0;
	virtual void SetFillColor(const std::string & color) = 0;
	double virtual GetArea() const = 0;
	double virtual GetPerimeter() const = 0;
	std::string virtual ToString() const = 0;
};