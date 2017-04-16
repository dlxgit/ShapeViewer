#pragma once
#include "IShape.h"
#include "Point.h"
#include <string>

class CShape : public IShape
{
public:
	CShape() = default;
	std::string GetFillColor() const override;
	std::string GetOutlineColor() const override;
	void SetOutlineColor(const std::string & color) override;
	void SetFillColor(const std::string & color) override;
protected:
	std::string m_fillColor;
	std::string m_outlineColor;
};