package comp222;

import robocode.*;
import java.awt.Color;

// API help : http://robocode.sourceforge.net/docs/robocode/robocode/Robot.html

/**
 * SpiderMan - a robot by (Tyler Shane Cooksey)
 */

public class SpiderMan extends Robot {

	/**
	 * run: SpiderMan's default behavior
	 */
	
	boolean spiderWatch;
	
	double webClimb;
	
	public void run() {
	
		setBodyColor(Color.lightGray);
		setGunColor(Color.RED);
		setRadarColor(Color.darkGray);
		setBulletColor(Color.GREEN);
		setScanColor(Color.WHITE);
		
		webClimb = Math.max(getBattleFieldWidth(), getBattleFieldHeight());
		
		spiderWatch = false;
		
		turnLeft(getHeading() % 90);
		ahead(webClimb);
		
		spiderWatch = true;
		turnGunLeft(90);
		turnRight(90);
		turnLeft(90);

		while(true) {
			spiderWatch = true;
			ahead(webClimb);
			spiderWatch = false;
			turnLeft(90);
		}
	}
	
	public void onHitRobot(HitRobotEvent e) {
		if ((e.getBearing() > -90) && (e.getBearing() < 90)) {
			back(100);
			turnGunRight(getHeading() - getGunHeading() + e.getBearing());
			fire(3);
			turnGunLeft(90);
		}
		else if ((e.getBearing() < -90) && (e.getBearing() > 90)) {
			ahead(100);
			turnGunLeft(90);
			fire(2);
		}
		else if ((e.getBearing() == -90) && (e.getBearing() == 90)) {
			ahead(100);
			turnGunLeft(90);
			fire(1);
		}
		turnGunRight(90);
		turnGunLeft(90);
	}

	/**
	 * onScannedRobot: What to do when you see another robot
	 */
	public void onScannedRobot(ScannedRobotEvent e) {
		 if(getGunHeat() == 0){
            if (e.getEnergy() > 16) {
                fire(1);
            } 
			else if (e.getEnergy() > 14) {
                fire(2);
            } 
			else if (e.getEnergy() > 7) {
                fire(3);
            } 
			else if (e.getEnergy() > 3) {
                fire(.8);
            } 
			else if (e.getEnergy() > .2) {
                fire(.5);
            }
        }
		if(spiderWatch){
			scan();
		}
	}

	/**
	 * onHitByBullet: What to do when you're hit by a bullet
	 */
	public void onHitByBullet(HitByBulletEvent e) {
		back(40);
		fire(1);
	}
	
	public void victoryDance(WinEvent e) {
		for (int i = 0; i < 75; i++) {
			turnRight(40);
			turnLeft(40);
		}
	}	
}
