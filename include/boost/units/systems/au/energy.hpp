#ifndef BOOST_UNITS_AU_ENERGY_HPP
#define BOOST_UNITS_AU_ENERGY_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/energy.hpp>

namespace boost {

namespace units { 

namespace au {

typedef unit<energy_dimension,au::system>      energy;
    
BOOST_UNITS_STATIC_CONSTANT(hartree_energy,energy);
BOOST_UNITS_STATIC_CONSTANT(E_h,energy);
BOOST_UNITS_STATIC_CONSTANT(E_hartree,energy);

} // namespace au

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_ENERGY_HPP
