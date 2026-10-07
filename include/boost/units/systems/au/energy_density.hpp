#ifndef BOOST_UNITS_AU_ENERGY_DENSITY_HPP
#define BOOST_UNITS_AU_ENERGY_DENSITY_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/energy_density.hpp>

namespace boost {

namespace units { 

namespace au {

typedef unit<energy_density_dimension,au::system>      energy_density;
    
BOOST_UNITS_STATIC_CONSTANT(hartree_per_cubic_bohr_radius,energy_density);
BOOST_UNITS_STATIC_CONSTANT(hartree_per_cubic_bohr,energy_density);
BOOST_UNITS_STATIC_CONSTANT(hartree_per_cubic_bohrradius,energy_density);
BOOST_UNITS_STATIC_CONSTANT(E_h_per_cubic_a0,energy_density);


} // namespace au

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_ENERGY_DENSITY_HPP
