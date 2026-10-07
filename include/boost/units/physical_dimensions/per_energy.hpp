#ifndef BOOST_UNITS_PER_ENERGY_DERIVED_DIMENSION_HPP
#define BOOST_UNITS_PER_ENERGY_DERIVED_DIMENSION_HPP

#include <boost/units/derived_dimension.hpp>
#include <boost/units/physical_dimensions/energy.hpp>

namespace boost {

namespace units {

/// derived dimension for mass density : E^-1 
typedef derived_dimension<energy_dimension,-1>::type per_energy_dimension;            

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_PER_ENERGY_DERIVED_DIMENSION_HPP
