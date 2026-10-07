#ifndef BOOST_UNITS_PARTICLE_DENSITY_DERIVED_DIMENSION_HPP
#define BOOST_UNITS_PARTICLE_DENSITY_DERIVED_DIMENSION_HPP

#include <boost/units/derived_dimension.hpp>
#include <boost/units/physical_dimensions/length.hpp>

namespace boost {

namespace units {

/// derived dimension for mass density : L^-3 
typedef derived_dimension<length_base_dimension,-3>::type particle_density_dimension;            

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_PARTICLE_DENSITY_DERIVED_DIMENSION_HPP
