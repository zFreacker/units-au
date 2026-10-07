#ifndef BOOST_UNITS_AU_MASS_DENSITY_HPP
#define BOOST_UNITS_AU_MASS_DENSITY_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/mass_density.hpp>

namespace boost {

namespace units { 

namespace au {

typedef unit<mass_density_dimension,au::system>      mass_density;
    
BOOST_UNITS_STATIC_CONSTANT(electron_masses_per_cubic_bohr_radius,mass_density);
BOOST_UNITS_STATIC_CONSTANT(electron_masses_per_cubic_bohr,mass_density);
BOOST_UNITS_STATIC_CONSTANT(electron_masses_per_cubic_bohrradius,mass_density);
BOOST_UNITS_STATIC_CONSTANT(m_e_per_cubic_a0,mass_density);

} // namespace au

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_MASS_DENSITY_HPP
