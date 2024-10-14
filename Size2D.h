#pragma once

#include <stdio.h>

template<class T>
struct Size2D {
	T X = 0;
	T Y = 0;
};

template<class T> Size2D<T> ConstructSize2D(T X, T Y);
template<class T> bool Resize(Size2D<T>& In, T X, T Y);
template<class T> bool ResizeX(Size2D<T>& In, T V);
template<class T> bool ResizeY(Size2D<T>& In, T V);
template<class T> T Width(Size2D<T>& In);
template<class T> T Height(Size2D<T>& In);