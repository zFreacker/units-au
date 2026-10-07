#ifndef BOOST_UNITS_AU_PARTICLE_DENSITY_HPP
#define BOOST_UNITS_AU_PARTICLE_DENSITY_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/particle_density.hpp>

namespace boost {

namespace units { 

namespace au {

typedef unit<particle_density_dimension,au::system>      particle_density;
    
BOOST_UNITS_STATIC_CONSTANT(particles_per_cubic_bohr_radius,particle_density);
BOOST_UNITS_STATIC_CONSTANT(particles_per_cubic_bohr,particle_density);
BOOST_UNITS_STATIC_CONSTANT(particles_per_cubic_bohrradius,particle_density);
BOOST_UNITS_STATIC_CONSTANT(particles_per_cubic_a0,particle_density);


} // namespace au

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_PARTICLE_DENSITY_HPP
