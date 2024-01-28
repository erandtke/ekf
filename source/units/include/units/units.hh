/*
 * @file units.hh
 * unit types to help myself from messing up conversions
 */

#pragma once

namespace units
{

template<int length_dim, int angle_dim, int time_dim>
class unit
{
public:
    unit(double val) : value(val){};
    double value;
};

template<int L, int A, int T>
unit<L,A,T> operator+(const unit<L,A,T> &lhs, const unit<L,A,T> &rhs)
{
    return unit<L,A,T>(lhs.value+rhs.value);
}

template<int L, int A, int T>
unit<L,A,T> operator-(const unit<L,A,T> &lhs, const unit<L,A,T> &rhs)
{
    return unit<L,A,T>(lhs.value-rhs.value);
}

template<int L1, int A1, int T1, int L2, int A2, int T2>
unit<L1+L2,A1+A2,T1+T2> operator*(const unit<L1,A1,T1> &lhs, const unit<L1,A1,T1> &rhs)
{
    return unit<L1+L2,A1+A2,T1+T2>(lhs.value*rhs.value);
}

template<int L1, int A1, int T1, int L2, int A2, int T2>
unit<L1-L2,A1-A2,T1-T2> operator/(const unit<L1,A1,T1> &lhs, const unit<L1,A1,T1> &rhs)
{
    return unit<L1-L2,A1-A2,T1-T2>(lhs.value/rhs.value);
}

using meters = unit<1,0,0>;
using radians = unit<0,1,0>;
using seconds = unit<0,0,1>;
using hertz = unit<0,0,-1>;
using mps = unit<1,0,-1>;
using rps = unit<0,1,-1>;

}
