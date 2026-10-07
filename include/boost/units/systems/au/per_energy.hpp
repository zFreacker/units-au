#ifndef BOOST_UNITS_AU_PER_ENERGY_HPP
#define BOOST_UNITS_AU_PER_ENERGY_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/per_energy.hpp>

namespace boost {

namespace units { 

namespace au {

typedef unit<per_energy_dimension,au::system>      per_energy;
    
BOOST_UNITS_STATIC_CONSTANT(per_hartree,per_energy);
BOOST_UNITS_STATIC_CONSTANT(per_E_h,per_energy);
BOOST_UNITS_STATIC_CONSTANT(per_hartree_energy,per_energy);


} // namespace au

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_PER_ENERGY_HPP
