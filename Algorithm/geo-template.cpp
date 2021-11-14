#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;

//start defining point repesentation
typedef double T;
typedef complex<T> pt;
#define x real()
#define y imag()

//geometry translations
pt translasi(pt v,pt p){ return p+v; }
pt dilatasi(pt v,T K,pt p){ return v+(p-v)*K; }
pt rotasi(pt p,T a){ return p*polar(1.0,a); }
pt tegaklurus(pt p){ return {-p.y,p.x};} //rotasi 90 derajat
pt linearTransfo(pt p, pt q, pt r, pt fp, pt fq){ return fp+(r-p)*(fq-fp)/(q-p);}

//products and angles
T dot(pt v,pt w){ //cek termasuk sudut apa? besarnya berapa?
	return (conj(v)*w).x;
	/*	sudut lancip -> return positive integer
		sudut siku-siku -> return 0
		sudut tumpul -> return negative integer*/
}
T cross(pt v, pt w){ //arah sudutnya kemana?
	return (conj(v)*w).y;
	/*	berlawanan arah (0,180) -> return positive integer
		180 derajat -> return 0
		searah jarum jam (-180,0) -> return negative integer
	*/
}
T orient(pt a,pt b,pt c){ //arah titiknya kemana?
	return cross(b-a,c-a);
	/*	berlawanan arah (0,180) -> return positive integer
		segaris -> return 0
		searah jarum jam (-180,0) -> return negative integer
	*/
}
T inAngle(pt a,pt b,pt c,pt p){
	//misal ada sudut BAC, titik P didalam sudut BAC jika dan hanya jika orient(a,b,p)>=0 && orient(a,c,p)<=0
	assert(orient(a,b,c)!=0);
	if(orient(a,b,c)<0) swap(b,c);
	return orient(a,b,p)>=0 && orient(a,c,p)<=0; //
}
T orientedAngle(pt a,pt b, pt c){ //hitung besar sudut dari titik B ke C melalui A yg berlawanan arah jarum jam
	if(orient(a,b,c)<=0) return dot(b-a,c-a);
	else return 2*M_PI-dot(b-a,c-a); 
}
bool isConvex(vector<pt> p){ //cek apakah convex-poligon/concave poligon
	bool hasPos=false,hasNeg=false;
	forn(i,0,p.size()-1){
		T o=orient(p[i],p[(i+1)%p.size()],p[(i+2)%p.size()]);
		if(o>0) hasPos=true;
		if(o<0) hasNeg=true;
	}
	return !(hasNeg&&hasPos);
}


//Lines
struct line{
	pt v; T c;
	//from the direction vector v and offset c
	line(pt v, T c) : v(v),c(c){}
	//from the equation ax+by=c
	line(T a,T b, T c) : v({b,-a}),c(c){}
	//from points P and Q
	line(pt p, pt q) : v(q-p),c(cross(v,p)){}

	T side(pt p){ return cross(v,p)-c;}
	T dist(pt p){ return sqrt(side(p))/sqrt(dot(v,v));}
	T sqDist(pt p){ return side(p)*side(p)/dot(v,v);}
	line perpThrough(pt p){return {p,p+tegaklurus(v)};}
	//buat sorting
	bool cmpProj(pt p,pt q); 

	void shiftleft(T dist);
	pt proj(pt p);
	pt refl(pt p);
};

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cout<<M_PI<<endl;
}