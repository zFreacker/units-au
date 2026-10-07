#ifndef BOOST_UNITS_AU_MASS_HPP
#define BOOST_UNITS_AU_MASS_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/mass.hpp>

namespace boost {

namespace units { 

namespace au {

typedef unit<mass_dimension,au::system>      mass;
    
BOOST_UNITS_STATIC_CONSTANT(electron_mass,mass);
BOOST_UNITS_STATIC_CONSTANT(m_e,mass);
BOOST_UNITS_STATIC_CONSTANT(electron_masses,mass);

} // namespace au

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_MASS_HPP
