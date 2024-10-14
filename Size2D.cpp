#include "Size2D.h"

template<class T>
Size2D<T> ConstructSize2D(T X, T Y) {
	Size2D<T> S;
	S.X = X;
	S.Y = Y;

	return S;
}

template<class T>
bool Resize(Size2D<T>& In, T X, T Y) {
	In.X = X;
	In.Y = Y;

	return true;
}
template<class T>
bool ResizeX(Size2D<T>& In, T V) {
	In.X = V;
	return true;
}
template<class T>
bool ResizeY(Size2D<T>& In, T V) {
	In.Y = V;
	return true;
}

template<class T>
T Width(Size2D<T>& In) {
	return In.X;
}
template<class T>
T Height(Size2D<T>& In) {
	return In.Y;
}