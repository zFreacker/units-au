#ifndef BOOST_UNITS_AU_ELECTRIC_CHARGE_HPP
#define BOOST_UNITS_AU_ELECTRIC_CHARGE_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/electric_charge.hpp>

namespace boost {

namespace units { 

namespace au {

typedef unit<electric_charge_dimension,au::system>      electric_charge;
    
BOOST_UNITS_STATIC_CONSTANT(elementary_charge,electric_charge);
BOOST_UNITS_STATIC_CONSTANT(elementary_charges,electric_charge);


} // namespace au

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_ELECTRIC_CHARGE_HPP
