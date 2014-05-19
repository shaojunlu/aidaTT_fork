#include "utilities.hh"

namespace aidaTT
{

    /// SUPER DUMMY !!! only L3 type: [ Omega, tan(lambda), phi_0, d_0m z_0, ]
    double calculateX0(const trackParameters& tp)
    {
        /// L3 type only
        return cos(tp.parameters()(2)) * tp.parameters()(3);
    }



    double calculateY0(const trackParameters& tp)
    {
        /// L3 type only
        return sin(tp.parameters()(2)) * tp.parameters()(3);
    }



    double calculatePhi0(const trackParameters& tp)
    {
        /// L3 type only
        return tp.parameters()(2);
    }



    double  calculateTanLambda(const trackParameters& tp)
    {
        /// L3 type only
        return tp.parameters()(1);
    }



    double calculateZ0(const trackParameters& tp)
    {
        /// L3 type only
        return tp.parameters()(4);
    }
}