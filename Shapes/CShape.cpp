#include "../stdafx.h"
#include "CShape.h"

void CShape::SetOutlineColor(const std::string & color)
{
	this->m_outlineColor = color;
}

void CShape::SetFillColor(const std::string & color)
{
	this->m_fillColor = color;
}