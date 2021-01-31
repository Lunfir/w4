public class HumanFactory implements UnitFactory {
    public HumanFactory() {
        System.out.println("HumanFactory()");
    }

    public Trooper buildTrooper() {
        System.out.println("HumanFactory buildTrooper");

        return new HumanTrooper();
    }

    public Vehicle buildVehicle() {
        System.out.println("HumanFactory buildVehicle");

        return new HumanVehicle();
    }

    public Aircraft buildAircraft() {
        System.out.println("HumanFactory buildAircraft");

        return new HumanAircraft();
    }

}
