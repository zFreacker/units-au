#ifndef BOOST_UNITS_SYSTEMS_AU_BOLTZMANN_ENTROPY_BASE_UNIT_HPP
#define BOOST_UNITS_SYSTEMS_AU_BOLTZMANN_ENTROPY_BASE_UNIT_HPP

#include <string>

#include <boost/units/config.hpp>
#include <boost/units/base_unit.hpp>
#include <boost/units/physical_dimensions/heat_capacity.hpp>
#include <boost/units/systems/si/heat_capacity.hpp>
#include <boost/units/conversion.hpp>

BOOST_UNITS_DEFINE_BASE_UNIT_WITH_CONVERSIONS(au, boltzmann_entropy, "boltzmann entropy", "k_B", 1.380649e-23, si::heat_capacity, -903);    // exact conversion

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::boltzmann_entropy_base_unit)

#endif

#endif // BOOST_UNITS_SYSTEMS_AU_BOLTZMANN_ENTROPY_BASE_UNIT_HPP
