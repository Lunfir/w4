public class Main {
    public static void main(String[] args) {
        UnitFactory factory = new HumanFactory();
        Trooper trooper  = factory.buildTrooper();
        Vehicle vehicle  = factory.buildVehicle();
        Aircraft aircraft = factory.buildAircraft();

        trooper.move();
        vehicle.shoot();
        aircraft.move();
    }
}
