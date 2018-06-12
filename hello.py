import tensorflow as tf

hello = tf.constant("hello, world")

with tf.Session() as sess:
    print(sess.run(hello))

