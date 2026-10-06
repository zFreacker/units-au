#ifndef BOOST_UNITS_SYSTEMS_AU_BOHR_RADIUS_BASE_UNIT_HPP
#define BOOST_UNITS_SYSTEMS_AU_BOHR_RADIUS_BASE_UNIT_HPP

#include <string>

#include <boost/units/config.hpp>
#include <boost/units/base_unit.hpp>
#include <boost/units/physical_dimensions/length.hpp>
#include <boost/units/base_units/si/meter.hpp>
#include <boost/units/conversion.hpp>

BOOST_UNITS_DEFINE_BASE_UNIT_WITH_CONVERSIONS(au, bohr_radius, "bohr radius", "a0", 5.29177210544e-11, si::meter_base_unit, -901);    // exact conversion

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::bohr_radius_base_unit)

#endif

#endif // BOOST_UNITS_SYSTEMS_AU_BOHR_RADIUS_BASE_UNIT_HPP
