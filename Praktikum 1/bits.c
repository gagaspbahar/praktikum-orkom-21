#include <stdio.h>

// ~(x^y) hanya menggunakan ~ dan &
int amber(int x, int y){
    return ~(x&~y) & ~(~x&y);
}

// Berikan nilai terkecil dalam two's complement
int kaeya(){
    return (1 << 31);
}

// -x tanpa - dan ~
int dvalin(int x){
    return (((1 << 31) >> 31) ^ x) + 1;
}

// mengembalikan byte ke-n dari word x
int handbook(int x, int n){
    int bits = n << 3;
    return (x >> bits) & 0xFF;
}

// Nilai mutlak
int medaka(int x){
    return ((x >> 31) + x) ^ (x >> 31);
}


// Balik urutan byte
int sayu(int x){
    int one = x & 0xFF;
    int two = (x >> (1<<3)) & 0xFF;
    int three = (x >> (2<<3)) & 0xFF;
    int four = (x >> (3<<3)) & 0xFF;
    int ans = four | (three << 8);
    ans = ans | (two << 16);
    ans = ans | (one << 24);
    return ans;
}


// Logical shift
int kujou(int x, int n){
    int shift = x >> n;
    int mark = 1 << 31;
    mark = mark >> n;
    mark = mark << 1;
    return shift & ~mark;
}

// kalikan dengan 3
int azhdaha(int x){
    return x+x+x;
}

// 2*f
unsigned abyss(unsigned uf){
    int sign = uf & (0x80 << 24);
    int exp = (0x7F << 24) | (0x80 << 16);
    int ufexp = uf & exp;
    int isZero = !ufexp;
    if(isZero){
        uf = (uf<<1) | sign;
    }
    else if (ufexp != exp){
        uf += (1<<23);
    }
    return uf;
}


// Jumlah 1 dalam bit ganjil
int mondstadt(int x){
    int ans;
    x = x ^ (x >> 16);
    x = x ^ (x >> 8);
    x = x ^ (x >> 4);
    x = x ^ (x >> 2);
    x = x ^ (x >> 1);
    ans = x & 1;
    return ans;
}
