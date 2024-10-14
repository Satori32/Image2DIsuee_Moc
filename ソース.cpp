#include <stdio.h>

#include "SurfaceT.h"
#include "Point2D.h"
#include "Size2D.h"

template<class T>
struct  Image2D
{
	SurfaceT<T> ST;
	Size2D<double> Size;
};

template<class T>
Image2D<T> ConstructImage2D(size_t Width, size_t Height,Size2D<double> Sz) {
	Image2D<T> I;
	I.ST = ConstructSurfaceT<T>(Width, Height);
	I.Size = Sz;

	return I;
}
template<class T>
bool Free(Image2D<T>& In) {
	Free(In.ST);
	ToZero(In.Size);

	return true;
}

template<class T>
T* Index(Image2D<T>& In, size_t X, size_t Y) {
	return Index(In.ST, X, Y);
}

template<class T>
bool SetPixel(Image2D<T>& In, size_t X, size_t Y, T C){
	if (Index(In.ST, X, Y) == NULL) { return false; }
	(*Index(In.ST, X, Y)) = C;

	return true;
}

int main() {
	Size2D<double> S = ConstructSize2D<double>(10, 10);
	Image2D<RGB24> I = ConstructImage2D<RGB24>(16, 16, S);

	RGB24 C;
	C.R = 8;
	SetPixel(I, 8, 8, C);
	RGB24* P = Index(I, 8, 8);

	Free(I);

	return 0;
		
}