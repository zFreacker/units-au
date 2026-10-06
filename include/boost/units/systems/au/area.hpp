#ifndef BOOST_UNITS_AU_AREA_HPP
#define BOOST_UNITS_AU_AREA_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/area.hpp>

namespace boost {

namespace units { 

namespace au {

typedef unit<area_dimension,au::system>      area;
    
BOOST_UNITS_STATIC_CONSTANT(square_bohr_radius,area);
BOOST_UNITS_STATIC_CONSTANT(square_bohrradius,area);
BOOST_UNITS_STATIC_CONSTANT(square_bohr,area);
BOOST_UNITS_STATIC_CONSTANT(square_a0,area);

} // namespace au

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_AREA_HPP
