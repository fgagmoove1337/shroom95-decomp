#include "geometry.hpp"

Geometry::InclusionChecker::Line::Line(int y, int x1, int x2, bool bOpen)
{
    _y = y;
    _x1 = x1;
    _x2 = x2;
    _bOpen = bOpen;
}

Geometry::InclusionChecker::Line::Line()
{
    _y = 0;
    _x1 = 0;
    _x2 = 0;
    _bOpen = false;
}

int Geometry::InclusionChecker::Line::GetY() const
{
    return _y;
}

int Geometry::InclusionChecker::Line::GetX1() const
{
    return _x1;
}

int Geometry::InclusionChecker::Line::GetX2() const
{
    return _x2;
}

bool Geometry::InclusionChecker::Line::IsOpen() const
{
    return _bOpen;
}

bool Geometry::InclusionChecker::Line::operator<(const Geometry::InclusionChecker::Line &) const
{
    // TODO
    return false;
}

Geometry::InclusionChecker::InclusionChecker()
{
}

void Geometry::InclusionChecker::AddToArea(const tagRECT *rects, int32_t n)
{
    if (n <= 0)
    {
        return;
    }

    ZFatalSectionGuard guard(m_lock);
    // TODO lock
    for (int32_t i = 0; i < n; i++)
    {
        this->_AddToArea(rects[i]);
    }

    this->MakeArea();
}

void Geometry::InclusionChecker::_AddToArea(const tagRECT &rect)
{
    this->vecRect.InsertBefore(-1) = rect;
}

void Geometry::InclusionChecker::ClearArea()
{
}

bool Geometry::InclusionChecker::IsInArea(int32_t, int32_t) const
{
    return false;
}

bool Geometry::InclusionChecker::IsInArea(const tagPOINT &point) const
{
    return IsInArea(point.x, point.y);
}

void Geometry::InclusionChecker::MakeArea()
{
}

void Geometry::InclusionChecker::SortAndUnique(ZArray<int> &)
{
}