public class AlienFactory implements UnitFactory {
    public AlienFactory() {
        System.out.println("AlienFactory()");
    }

    public Trooper buildTrooper() {
        System.out.println("AlienFactory buildTrooper");

        return new AlienTrooper();
    }

    public Vehicle buildVehicle() {
        System.out.println("AlienFactory buildVehicle");

        return new AlienVehicle();
    }

    public Aircraft buildAircraft() {
        System.out.println("AlienFactory buildAircraft");

        return new AlienAircraft();
    }
}
