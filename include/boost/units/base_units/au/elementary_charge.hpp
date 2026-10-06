#ifndef BOOST_UNITS_SYSTEMS_AU_ELEMENTARY_CHARGE_BASE_UNIT_HPP
#define BOOST_UNITS_SYSTEMS_AU_ELEMENTARY_CHARGE_BASE_UNIT_HPP

#include <string>

#include <boost/units/config.hpp>
#include <boost/units/base_unit.hpp>
#include <boost/units/physical_dimensions/electric_charge.hpp>
#include <boost/units/systems/si/electric_charge.hpp>
#include <boost/units/conversion.hpp>

BOOST_UNITS_DEFINE_BASE_UNIT_WITH_CONVERSIONS(au, elementary_charge, "elementary charge", "e", 1.602176634e-19, si::electric_charge, -904);    // exact conversion

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::elementary_charge_base_unit)

#endif

#endif // BOOST_UNITS_SYSTEMS_AU_ELEMENTARY_CHARGE_BASE_UNIT_HPP
