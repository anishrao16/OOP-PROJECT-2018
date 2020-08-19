<?php
/**
 * The base configuration for WordPress
 *
 * The wp-config.php creation script uses this file during the
 * installation. You don't have to use the web site, you can
 * copy this file to "wp-config.php" and fill in the values.
 *
 * This file contains the following configurations:
 *
 * * MySQL settings
 * * Secret keys
 * * Database table prefix
 * * ABSPATH
 *
 * @link https://codex.wordpress.org/Editing_wp-config.php
 *
 * @package WordPress
 */

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define( 'DB_NAME', 'GDS System' );

/** MySQL database username */
define( 'DB_USER', 'root' );

/** MySQL database password */
define( 'DB_PASSWORD', '' );

/** MySQL hostname */
define( 'DB_HOST', 'localhost' );

/** Database Charset to use in creating database tables. */
define( 'DB_CHARSET', 'utf8mb4' );

/** The Database Collate type. Don't change this if in doubt. */
define( 'DB_COLLATE', '' );

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define( 'AUTH_KEY',         '#lmC?=O x_> *fiIS%ci<GbTC*`Xa;BMgDW7GreT@5m>^:S2Z3%Eqr21BaT@{HPm' );
define( 'SECURE_AUTH_KEY',  'aW?[j^S:B</+1RX<^s6#!,vfO {.$6&i)4_gX3]_ha879_7AN}wrj[ZBnJ7J{`{$' );
define( 'LOGGED_IN_KEY',    '07eYICV^w!}Pm&?T?j`fvGuON]mBCjiEuz+09d)-Dj(r]*J<Ujd4P3-QuXc-CC(z' );
define( 'NONCE_KEY',        '62Om^5Rs9@Q4uN#+xt%gXoA>ga/T[NXpEq%RS?Vqj0/D;LIxom=I]QE YOC;z qE' );
define( 'AUTH_SALT',        '~EkvRSRav4ZH}!>a/>9AkZHH=Ypjtb-o/ Ph#>q?7e1Rd}F(zKVbQu4A${R:Aw&=' );
define( 'SECURE_AUTH_SALT', 'tJkg@?(io3@<Pki+~#^hm.fz6WJw`zNHxlKz!Lxrh$z.t]>1zhBrp1k}_ZV7mieL' );
define( 'LOGGED_IN_SALT',   'O$t8GOFjyC?@]OLo*c-BT:%O;7b>:eE)Ce~E^AN`g92Np2G_} (6|k(w[Q~CRC0q' );
define( 'NONCE_SALT',       'BOl%Ie:CVZ27)haFUL~~w.w!J7,]jbM8o`;s0JjAVs7GfGo$)t*BRB:^#SQYoaUa' );

/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each
 * a unique prefix. Only numbers, letters, and underscores please!
 */
$table_prefix = 'wp_';

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 *
 * For information on other constants that can be used for debugging,
 * visit the Codex.
 *
 * @link https://codex.wordpress.org/Debugging_in_WordPress
 */
define( 'WP_DEBUG', false );

/* That's all, stop editing! Happy publishing. */

/** Absolute path to the WordPress directory. */
if ( ! defined( 'ABSPATH' ) ) {
	define( 'ABSPATH', dirname( __FILE__ ) . '/' );
}

/** Sets up WordPress vars and included files. */
require_once( ABSPATH . 'wp-settings.php' );
